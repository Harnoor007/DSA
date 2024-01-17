class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        vector<bool> prime(n+1, true);//n+1 becoz if declared n, then the below inner loop may cause error, by going out of bounds
        prime[0] = prime[1] = false;
        for(int i = 2; i<n; i++){
            if(prime[i]){
                count++;
                for(int j = 2*i; j<n; j = j+i){
                    /*for eg i = 2, so we start from j = 2*2, mark it non prime, then we increase j by i times so j = j+i */
                    prime[j] = false;
                }
            }
        }
        return count;
    }
};

//gcd(a,b) = gcd(a%b, b) or gcd(a-b, b)
//lcm(a,b)*gcd(a,b) = a*b