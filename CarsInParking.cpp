#include<bits/stdc++.h>

using namespace std;

class Car
{
	public:
	int arr,dep;	
	Car(int x, int y):arr(x),dep(y)
	{
	}
	
};

bool Comparator(Car c1, Car c2)
{
	return c1.arr < c2.arr;
}

class ParkingLot
{
	map<int,int> countMap;
	map<int,bool> dep;
	public:
	void Push(Car v)
	{
		static int count = 0;
		count++;
		dep[v.dep] = true;
		for(int i=v.arr + 1; i<=v.dep;i++)
		{
			countMap[i]++;	
			if(dep[i])
				countMap[i+1]--;
		}		
	}
	
	void DisplayCount()
	{
		auto i = countMap.begin();
		while(i!=countMap.end())
		{
			cout<<"Time->"<<i->first<<"  Count->"<<i->second<<endl;
			i++;
		}
	}	
	
};

int main()
{
	Car c1(0,6),c2(2,5),c3(3,4),c4(4,7);
	ParkingLot p;
	p.Push(c1);
	p.Push(c2);
	p.Push(c3);
	p.Push(c4);
	p.DisplayCount();
	return 0;
}
