#include <stdio.h>

int main (){
	int N;
	scanf("%d", &N);
	long long int a[N];
	int total=0;
	int min_odd=100001;
	for (int i=0; i<N; i++){
		scanf("%lld", &a[i]);
	}
	for (int i=0; i<N; i++){
		total+=a[i];
		if (min_odd > a[i] && a[i] % 2 == 1){
			min_odd=a[i];
		}
	}
	if (total % 2 == 0){
		printf("%d", total);
	}
	else{
		printf("%d", total-min_odd);
	}
	return(0);
}
