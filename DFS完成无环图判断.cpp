/********************
以下算法均用C++实现
DFS算法完成无环图判断（假设图中不存在自环或平行边）
小姚于 2022.1.2 晚10点 
********************/
class CycleJudge {
private:
    bool marked[]; //定义marked数组，用于标记节点访问情况
    bool hasCycle(); //用于判断节点间是否有环
    void dfs(Graph G, int v, int u) {
        marked[v] = true;
        for (int w :G.adj(v))
            if (!marked[w])
                dfs(G,w,v);
            else if (w != u) hasCycle = true;
    }



public:
    CycleJudge(Graph G) { //主函数CycleJudge为公有类型，输入一张图，用于启动dfs
        marked[] = new bool[G.V()] //东塔
        for (int s = 0; s < G.V(); s++){ //访问图中每一个节点
            if(!marked[s]) //如果该节点是未被标记的状态
                dfs(G,s,s); //启动dfs
        }

    

        
}
