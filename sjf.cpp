at=[1,2,3,4,5]
bt=[1,2,3,4,5]
ar=[1,2,3,4,5]
ft=[1,2,3,4,5]
running=0
n=int(input("Enter total processes:"))
for i in range (0,n):
	at[i]=int(input("Enter arrival time:"))
	bt[i]=int(input("Enter burst time:"))
for i in range (0,n):
	ar[i]=at[i]
small=ar[0]
index=0
while (bt[0]!=0 && bt[0]!=0 && bt[1]!=0 && bt[2]!=0 && bt[3]!=0): 
	for i in range (0,n):
		if ar[i]!=NULL
			if ar[i]<=small
				small=ar[i]
				index=i
	for i in range (0,n):
		if i==index	
			ar[i]=NULL
	for i in range (0,n):
		if ar[i] != NULL
			small=ar[i]
			break
	while (bt[index]!=0):
		bt[index]--
		running++ 
		if bt[index]==0 
			ft[index]=running

print"\nfor p1:"<<ft[0]-at[0]<<"\nfor p2:"<<ft[1]-at[1]<<"\nfor p3:"<<ft[2]-at[2]<<"\nfor p4:"<<ft[3]-at[3]		
	
	
