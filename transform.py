import os
import sys

operators={}
operators['+']=1
operators['-']=2
operators['*']=3
operators['/']=4
operators['^']=5

no_of_inputs=int(raw_input())
output=[]
for i in range(no_of_inputs):
	string=raw_input()
	stack=[]
	charList=[]
	for char in string:
		charList.append(char)
	
	
	for char in charList:
		if char not in operators:
			if char == '(':
				stack.append(char)
			elif char == ')':
				while '(' not in stack[-1]:
					output.append(stack.pop())
				stack.pop()	
			else:
				output.append(char),
		else:                
			if not stack:
				stack.append(char)
			else:
				while(stack and stack[-1] in operators and operators[stack[-1]] >= operators[char]):
					output.append(stack.pop())
				stack.append(char)
				
		
	
	
	
	while stack:
		output.append(stack.pop())
	
	final=str()
	for char in output:
		final = final + char
	print final	
		
			        
				
				
	

