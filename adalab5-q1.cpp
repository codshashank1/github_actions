// #include <bits/stdc++.h>
// using namespace std;



// void maxHeapify(vector<int> &v, int n, int i){
// 	int left_child_index = 2 * i + 1;
// 	int right_child_index = 2 * i + 2;
	

// 	int largest = i;
// 	// cout << largest << "\n";

// 	if(left_child_index < n && v[largest] < v[left_child_index]){
// 		largest = left_child_index;
// 	}

// 	if(right_child_index < n && v[largest] < v[right_child_index]){
// 		largest = right_child_index;
// 	}

// 	if(largest != i) {
// 		swap(v[largest], v[i]);
// 		maxHeapify(v, n, largest);
// 	}
// }


// void heapsort(vector<int> &v) {
// 	// Build max heap of the array:

// 	int n = v.size();
// 	for(int i = n / 2 - 1; i >= 0; --i){
// 		maxHeapify(v, n, i);
// 	}

// 	// exhchange the max node at top with rightmost leaf and repeatedlly to 
// 	// it while also maintaining the heap propert.

// 	for(int i = n - 1; i > 0; --i){
// 		swap(v[i], v[0]);
// 		maxHeapify(v, i, 0);
// 	}



// }

// void PrintHeap(vector<int>& a, int n)
// {
//     int start=0;
//     int j=0;
//     int high=pow(2,j);
//     while(1)
//     {
//         if(high>=n) high=n;
//         cout<<"level "<<j<<endl;
//         for(int i=start;i<high;i++) cout<<a[i]<<' ';
//         cout<<endl;
//         if(high>=n) break;
//         start=high;
//         ++j;
//         high+=pow(2,j);
//     }
// }

// int main(){

// 	int n; cin >> n;


// 	vector<int> v(n);
// 	for(int i = 0; i < n; ++i){
// 		cin >> v[i];
// 	}
// 	heapsort(v);

// 	for(auto &it : v){
// 		cout << it << " ";
// 	}
// 	cout << "\n";
// 	int j = 0;

// 	// for(int i = 0; i <= ceil(log(v.size())); ++i) {
// 	// 	cout << "LEVEL " << i << " --> " << "\n";
// 	// 	for(int k = j; k < i + pow(2, i) && k < v.size(); ++k){
// 	// 		cout << v[k] << " ";
// 	// 		j++;
// 	// 	}

// 	// 	cout << "\n";
// 	// }
// 	PrintHeap(v, n);



// 	return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main()
{
	 int n;
    cout<<"Enter the no. of elements to be entered: ";
    cin>>n;
    int a[n];
    cout<<"Enter the nos.:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

	int m = INT_MIN;
	int M = 0;
	int b[n];
	int c=0;

	for (int i = 0; i < n; i++) {
		M = M + a[i];
		if (m < M)
		{
			m = M;
			b[c++]=a[i];
		}

		if (M < 0)
			M = 0;
	}
    cout<<"The subarray is:"<<endl;
    for(int i=0;i<c;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl<<"The max sum is: "<<m<<endl;
	return 0;
}
