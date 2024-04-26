.model small

.data

 msg1 db 10,13,"Enter sub marks.$"
 msg2 db 10,13,"FAIL$"
 msg3 db 10,13, "C Grade$"
 msg4 db 10,13,  "B Grade$"
 msg5 db 10,13, "A Grade$"

 arry db 05h dup(00)
 sum dw 0000h

 .code

  mov ax,@data
  mov ds,ax

  lea dx,msg1
  mov ah,09H
  int 21H


  mov ch,05h         ; counter for subs
   LEA SI, arry


L3:   CALL accept

   Mov [SI], bl         ;    bh=00  bl=85,bx=0085 sum=0000,  add sum ,bl
   mov bh,00h
   add sum, bx

   INC SI
   DEC CH
   JNZ  L3

   mov ax, sum         ; dividend =accumalator 16bit/8bit
   mov bl, 05h

   div bl                ; al = quo        ah=rem

   cmp al, 40h
   JbE X1

   cmp al, 60h
   JbE X2

   cmp al, 80h
   JbE X3


   mov ah, 09h
   lea dx, msg5
   int 21h
   jmp exit

 
  X1: mov ah, 09h;  fail mssg
       LEA dx, msg2
       int 21h
       jmp exit


 X2: mov ah,09h
     lea dx, msg3
     int 21h
     jmp exit

 X3:  mov ah,09h
      lea dx, msg4
      int 21h
      jmp exit




exit:     mov ah,4ch
    int 21H



accept proc near
  mov ah,01H                                    
  int 21H      

  sub al,30H
  cmp al,09H                                                 
  JBE L1
  sub al,07H                                   

 L1: mov cl,04H   
     SHL al,cl  
     mov bl,al    ; tens place value

     mov ah,01H
     int 21H

     sub al,30H
     cmp al,09H
     JBE L2
     sub al,07H


  L2:ADD bl,al     ; two digit no

  ret
  endp

    end


      



   
