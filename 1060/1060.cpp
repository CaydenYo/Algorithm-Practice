#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <string.h>
#include <cstdio>
#include <stdlib.h>
#include <cctype>
#include <stack>
#include <queue>

using namespace std;


void printAllOutStackSeq( queue<int> inQueue, int n, stack<int> st, queue<int> out )
{
	if( n <= 0 || ( inQueue.empty() && st.empty() && out.empty() ) )
	{
		return;
	}

	if( out.size() == n )
	{
		while( !out.empty() )
		{
			cout << out.front();
			out.pop();
		}

		cout << endl;
		return;
	}

	stack<int> stCopy = st;  // 备份一下，否则储转
	queue<int> outCopy = out;

	if( !st.empty() ) // 出栈，将元素出栈，push到结果队列中
	{
		out.push( st.top() );
		st.pop();
		printAllOutStackSeq( inQueue, n, st, out );
	}


	if( !inQueue.empty() ) // 入栈，将输入队列出队，进行入栈
	{
		stCopy.push( inQueue.front() );
		inQueue.pop();
		printAllOutStackSeq( inQueue, n, stCopy, outCopy );
	}

	return;
}


int main()
{
    int n;
	while(cin >> n)
	{
        int a[n];
        for(int i = 0;i < n;i++)
        {
            a[i] = i + 1;
        }
        queue<int> inQueue;

        for( int i = 0; i < n; i++ )
        {
            inQueue.push( a[i] );
        }

        stack<int> st;
        queue<int> out;

        printAllOutStackSeq( inQueue, n, st, out );
	}

	return 0;
}

/*
n个元素入栈，出栈序列个数： C(2n,n)/(n+1)
./a.out
1 2 3 4
1 2 4 3
1 3 2 4
1 3 4 2
1 4 3 2
2 1 3 4
2 1 4 3
2 3 1 4
2 3 4 1
2 4 3 1
3 2 1 4
3 2 4 1
3 4 2 1
4 3 2 1

./a.out|wc -l
14



*/
