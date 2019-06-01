#include"header.h"
#include<reg51.h>
int io_read(int PORT,int PIN)
{
  int stat;
  switch(PORT)
  {
  	case PORT0:
		stat = (P0 & (1<<PIN))?1:0;
		break;
	case PORT1:
 		stat = (P1 & (1<<PIN))?1:0;
		break;
	case PORT2:
		stat = (P2 & (1<<PIN))?1:0;
		break;
	case PORT3:
		stat = (P3 & (1<<PIN))?1:0;
		break;
 }
	return stat;
}

void io_byte_write(int PORT,int Byte)
{
	switch(PORT)
	{
	//	#if(abc==0)		  
			case PORT0:	
				P0 = Byte; 
				break;
	//	#endif
		
	//	#if(abc==0)
			case PORT1: 
				P1 = Byte; 
				break;
	/*	#endif
		
		#if(abc==1)*/
		case PORT2: 
			P2 = Byte; 
			break;
		/*#endif

		#if(abc==0)*/
			case PORT3: 
				P3 = Byte; 
				break;
		//#endif
	}
}

void io_write(int PORT,int PIN,int VAL)
{

	switch(PORT)
	{
		#if(abc==0)
		case PORT0:
			if(VAL == 1)		//off
					P0 |=(1<<PIN);
			else				//on
					P0 &=~(1<<PIN);
			break;
			#endif
		
		#if(abc==0)
			case PORT1:
			if(VAL == 1)
				P1 |=(1<<PIN);
			else
				P1 &=~(1<<PIN);
			break;		
		#endif
		
		#if(abc==1)
		case PORT2:
			if(VAL == 1)
				P2 |= (1<<PIN);
			else
				P2 &=~(1<<PIN);
					break;
		#endif
		
		#if(abc==0)
		case PORT3:
			if(VAL == 1)
				P3 |= (1<<PIN);
			else
				P3 &=~(1<<PIN);
			break;
		#endif
	}
}  