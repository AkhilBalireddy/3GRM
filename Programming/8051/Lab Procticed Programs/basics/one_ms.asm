CSEG AT 0X123
	delay1ms:
		MOV R0,#250
		DJNZ R0,$
		MOV R0,#247
		DJNZ R0,$
		RET
		
CSEG AT 0X0
	ACALL delay1ms
	SJMP $
	END 