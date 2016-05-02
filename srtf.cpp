#include <iostream>
using namespace std;
int queue[10];
int n,front=-1,rear=-1;
 int dequeue ()
{
	int x;
	front++;
	queue[front]=x;

	return x;
}

int enqueue (int x)
{
	
	rear++;
	queue[rear]=x;

}


void main ()
{
	int count,j,time,remain,flag=0,time_quantum,index,running=0,aindex,aaindex;
	int wait_time=0,turnaround_time=0,at[10],bt[10],rt[10],ar[10],dq[10],ft[10];
	cout << "Enter total processes";
	cin >> n;
	remain = n;
	for (count=0;count < n ; count ++)
	{
		cout<<"Enter arrival time for the process "<<count+1<<":";
		cin >>	at[count];
		ar[count]=at[count];
		cout<<"Enter burst time for the process "<<count+1<<":";
		cin>> bt[count];
		rt[count]=bt[count];
	}
	
	int	small=ar[0];
 index=0;
for (int i= 1 ;i<n ;i++)
{
	if (ar[0]==NULL&&ar[1]==NULL&&ar[2]==NULL&&ar[3]==NULL)
	{
		for (int i=0;i<n;i++)
		{
			dq[i]=dequeue();
		}
		for (int i=0;i<n;i++)
		{
			for (;rt[dq[i]]==0;)
			{
				rt[dq[i]]--;
			running++;
			if (rt[dq[i]]==0)
			{
				ft[dq[i]]=running;
				break;		
			}
		}
	}
	}
	if (ar[i]<small)
	{
		small=ar[i];
		index=i;
	}
	for (int i =0;i<n;i++)
	{
		if (i==index)
		{
			ar[i]=NULL;
		}
		for (int i=0; i<n;i++)
	{
		if ( ar[i] != NULL)
		{
			small=ar[i];
			break;
		}
	}

	}}
for (int i = 0;rt[index]--;i++)
{
	rt[index]--;
	running++;
	if (rt[index==0])
	{
		ft[index]=running;
	}

		for (int i=0;i<n;i++) //
{ 
	if (ar[i]!=NULL)
	{
	if (ar[i]<=small)
	{
		small=ar[i];
		aindex=i;
	}}}
	
		if (ar[aindex]<=running)
		{ 
			enqueue(index);
			index=aindex;	
	for (int i =0;i<n;i++)
	{
		if (i==index)
		{
			ar[i]=NULL;
		}
	}
		for (int i=0; i<n;i++)
	{
		if ( ar[i] != NULL)
		{
			small=ar[i];
			break;
		}
	}

		}}
		cout <<"\nfor p1:"<<ft[0]-at[0]<<"\nfor p2:"<<ft[1]-at[1]<<"\nfor p3:"<<ft[2]-at[2]<<"\nfor p4:"<<ft[3]-at[3];
system ("pause");

}
	



