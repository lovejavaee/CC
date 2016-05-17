// 本函数用于打印一个缓冲区的内容，一行里先以十六进制方式打印，再打印对应的字符串，中间以";"分隔。一行打印16个字节。
#define PRINT_LINE_WIDTH  16
void PrintChar(FILE*fp, char ch)
{
  if(ch < 16)
      fprintf(fp, "%c", '.');
  else
      fprintf(fp, "%c", ch);  
}
void PrintNullHex(FILE*fp, int count)
{
  int i;

  for(i=0; i<count*3; i++)
  {
      PrintChar(fp, ' ');
  }
}
/******************************************************************************
  函数名称: PrintfBuf
  功能说明: 打印buf的内容，同时打印十六进制和字符
  输入参数: fp:要打印到的文件句柄
  输出参数: 
  返 回 值: 无
 ******************************************************************************/
void PrintfBuf(FILE *fp, const unsigned char *buf, int len)
{
    int i = 0, j = 0;
    int tail = 0;
    int tail_start = 0;
    const unsigned char *pucBuf = buf;

    if (fp == NULL || len == 0 || NULL == buf)
    {
        return;
    }

    for(i=1; i<=len; i++)
    {
        fprintf(fp, "%02X ", pucBuf[i-1]);
      
        if((i % PRINT_LINE_WIDTH) == 0)
        {
            fprintf(fp, "; ");
            for(j = i - PRINT_LINE_WIDTH; j<i; j++)
            {
                PrintChar(fp,pucBuf[j]);
            }

            fprintf(fp, "\r\n");
        }

    }
    
    if((len % PRINT_LINE_WIDTH) != 0)
        tail = PRINT_LINE_WIDTH - (len % PRINT_LINE_WIDTH);
    if(tail != 0)
    {
      PrintNullHex(fp, tail); 

      fprintf(fp, "; ");

      tail_start = (len / PRINT_LINE_WIDTH) * PRINT_LINE_WIDTH;    
      for(i = tail_start; i<len; i++)
      {
         PrintChar(fp, pucBuf[i]);
      }
      fprintf(fp, "\r\n");      
    }    
}

