#include <iostream>
#include <vector>
using namespace std;
/*
1. 충전소가 더 이상 없는 < 마지막 충전소와 학교 사이 거리 >
2. 충전소를 k번 들를때, 이웃한 충전소들 사이의 거리 중 가장 '큰' 거리
*/
int main() {
	int L, N, K;
	cin >> L >> N >> K;
	vector<int> nvec;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		nvec.push_back(a);

	}
	int result;
	//1의 경우 우선 고려
	result = L - nvec[nvec.size() - 1];
	//2의 경우 고려
	int low = 0, high = N-1;
	while (low < high) {

	}
	return 0;
}