int mod (int x, int y){
    if(y == 0){
        return x;
    }
    mod(x-1, y-1);
}

int main(){
    int x = 5;
    int y = 4;

    printf("Funcao MOD: %d", mod(x,y));
}