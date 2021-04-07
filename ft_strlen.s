			section	.text
			global	_ft_strlen
_ft_strlen:						; size_t ft_strlen(char *str)
		xor	rax, rax			; i = 0
		jmp compare
increment:
		inc rax 				; i++
compare :
		cmp	BYTE[rdi + rax], 0	
		jne	increment			; if (str[i] != '\0') goto increment
		ret						; return (i)
