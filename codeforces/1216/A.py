n = int(input())#taking input for cp
s = list(input())
count=0
for i in range(0,n,2):
	if(s[i]==s[i+1]):
		count +=1
		if(s[i]=="b"):
			s[i]="a"
		else:
			s[i]='b'

print(count)
print("".join(s))
