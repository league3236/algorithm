#include <iostream>
#define N 9

using namespace std;

int arr[N];
//배열의 최대값 index를 반환하는 함수

int getMaxID(){
    int max = 0;
    int idx = 0;
    for(int i=0; i<N; i++){
        if(max=<arr[i]){
            max=arr[i];
            idx=i;
	}
    }
    return idx;
}


int main(){
    //입력
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }

    int idx = getMaxID();
    
    printf("%d\n",arr[idx]);
    printf("%d\n",idx+1);

    return 0;
}
