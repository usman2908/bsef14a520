#include <iostream>
using namespace std;
int queue[10];
int n,front=-1,rear=-1;
int dequeue ()
{
	int x=0;
	front++;
	queue[front]=x;

	return x;
}

void enqueue (int x)
{
	
	rear++;
	queue[rear]=x;

}

void main ()
{
	int s,count,ss,sss,remain,flag=0,index,aindex,running=0;
	int wait_time=0,turnaround_time=0,at[10],bt[10],rt[10],ar[10],dq[10],ft[10];
	cout << "Enter total processes";
	cin >> n;
cout << "Enter time slice";
	cin >> s;
cout << "Enter i/0 running time";
	cin >> ss;
cout << "Enter i/0 waiting time";
	cin >> sss;

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
	int small=ar[0];
	index=0;
	for (int m =0;m<n;m++)
	{
	for (int i=0;i<n;i++)
	{
		if (ar[i]<=small)
	{
		small=ar[i];
		index=i;
		}}
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
		for (int i=0;i<s;i++)
		{
			if (index%2==0)
			{
				for (int k=0;k<ss;k++)
				{
					rt[index]--;
						running++;
						if (rt[index]==0)
			{
				ft[index]=running;
				break;
			}
				}
				aindex=ar[index];
				ar[index]=running+sss;
			}
			if (index%2==0)
				break;

			rt[index]--;
			running++;
			if (rt[index]==0)
			{
				ft[index]=running;
				break;
			}
		}
		if (aindex%2!=0)
		enqueue(index);

	}
	for (;rt[0]!=0 && rt[1]!=0&& rt[2]!=0&& rt[3]!=0;)
	{
	for (int i=0;i<n;i++)
	{
		dq[i]=dequeue();

	}
	
	
	for (int i=0;i<n;i++)
		{
			for (int j=0;j<s;j++)
			{
				rt[dq[i]]--;
			running++;
			if (rt[dq[i]]==0)
			{
				ft[dq[i]]=running;
				break;
			}
			index=dq[i];
			}

			if (rt[index]!=0)
			enqueue(index);
		}
		
	
	}
			cout <<"\nfor p1:"<<ft[0]-at[0]<<"\nfor p2:"<<ft[1]-at[1]<<"\nfor p3:"<<ft[2]-at[2]<<"\nfor p4:"<<ft[3]-at[3];
system ("pause");

}
	