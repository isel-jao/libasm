
			section	.text
			global	_ft_strcpy

;char *ft_strcpy(char *dest, const char *src);

_ft_strcpy: ; rax ft_strcpy(rdi, rsi);
		xor 	rax, rax				; i = 0;
copy :
		mov 	dl , BYTE[rsi + rax]
		mov 	BYTE[rdi + rax] , dl	; dest[i] = src[i];
		cmp 	BYTE[rsi + rax]	, 0
		je		end						; if (src[i] == '\0') goto end
		inc		rax						; i++;
		jmp		copy
end :
		mov 	rax , rdi
		ret								; return (dest)

