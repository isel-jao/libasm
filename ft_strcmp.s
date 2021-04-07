			section	.text
			global	_ft_strcmp
_ft_strcmp:
		xor rax , rax 				; i = 0
compare :
		mov dl , BYTE[rsi + rax]
		cmp	BYTE[rdi + rax], dl		; compare s1[i] with s2[i]
		jg	greater
		jl	lesser
		cmp BYTE[rdi + rax], 0		; compares1[i] whith '\0'
		je	equal
		inc rax						; i++
		jmp compare
greater:
		mov rax, 1
		ret	
lesser:
		mov rax, -1
		ret
equal:
		mov rax, 0
		ret
