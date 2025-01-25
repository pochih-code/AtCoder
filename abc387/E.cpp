// 夢???????????????
// 未?????????夢???
// 忘??物?取???????
// 古??思?出?埃??? 
# include  <bits/stdc++.h>
using  namespace std ;

# define ll long long

const int N = 1e5 + 5 ;

string n ;

bool is_good(int x){
	int sum = 0, p = x ;
	while(p) sum += p % 10 , p /= 10 ;
	return x % sum == 0 ;
}

void zero_out(int num){
	for (int i = 1 ; i <= num ; i++){
        cout << 0 ;
    }
}

int  main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(0) ;

	cin >> n ;
	
	int len = n.size() ;
	
	if (len <= 6){
		int now_n = 0 ;
		for (int i = 0 ; i < len ; i++){
			now_n = now_n * 10 + n[i] - '0' ;
        }
		for (int i = now_n ; i < 2 * now_n ; i++){
			if (is_good (i) && is_good (i + 1 )){
				cout << i ;
				return  0 ;
			}
		}
		cout << -1 ;
		return  0 ;
	}
	
	bool zero = 0 ;
	for (int i = len - 1 ; i >= 0 ; i--)
		if (n[i] == '0'){
			zero = 1 ;
			break ;
		}
	
	if (!zero){
		int x = n[ 0 ] - '0' ;
		if (x != 9 ){
			cout << x << 8 - x, zero_out(len - 2) ;
        }
		else{
			cout << 17 , zero_out(len - 1) ;
        }
	}
	else{
		int x = n[0] - '0' ;
		int y = n[1] - '0' ;
		if (x == 9){
			cout << 17 , zero_out(len - 1) ;
        }
		else if (x == 8){
			cout << 107 , zero_out(len - 2) ;
        }
		else if (x != 1 || (x == 1 && y >= 5)){
			cout << x + 1 << 8 - x - 1, zero_out(len - 2) ;
        }
		else{
			cout << 17, zero_out(len - 2) ;
        }
	}
	return 0 ;
}
