class DSU {
    public:
    DSU(int n){
        vector<int> parent, sz;

        parent.resize(n+1);
        sz.resize(n+1,1);  

        for(int i =0; i<n+1; i++){
            parent[i]  = i ;
        }
    }   

    void uni(int u, int v){

        int x = up(x);
        int y = up(v);

        if(x == y ) return; 

        if(sz[x] > sz[y]){
            parent[y] = x;
            sz[x] += sz[y];
        } 

        else{
            parent[x] = y;
            sz[y] += sz[x];
        }
    } 

    int up(int x){

       if(parent[x] == x) return x ;

       return parent[x] = up(parent[x]) ;
    }
} ;