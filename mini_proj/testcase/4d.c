int main(){
	int x;
	__ASSUME(x < 5); // not equals to WP
	if(x < 5){
		x = x + 1;
	}
	__ASSERT(x <= 5); // equals to SP
	return 0;
}