
#include <iostream>
#include <vector>
using namespace std;
 
// 存储Graph边的数据结构
struct Edge {
    int src, dest;
};
 
// 表示Graph对象的类
class Graph
{
public:
    // 表示邻接表的VectorVector
    vector<vector<int> > adjList;
 
    // Graph构造器
    Graph(vector<Edge> const &edges, int n)
    {
        // 调整Vector的大小以容纳 `n` 类型为 `vector<int>`
        adjList.resize(n);
 
        // 向有向Graph添加边
        for (auto &edge: edges) {
            adjList[edge.src].push_back(edge.dest);
        }
    }
};
 
// 对Graph进行DFS，设置所有的出发时间
// Graph的顶点
void DFS(Graph const &graph, int v, vector<bool>
    &discovered, vector<int> &departure, int &time)
{
    // 将当前节点标记为已发现
    discovered[v] = true;
 
    // 设置顶点 `v` 的到达时间
    time++;
 
    // 为每条边 (v, u) 做
    for (int u: graph.adjList[v])
    {
        // 如果 `u` 还没有被发现
        if (!discovered[u]) {
            DFS(graph, u, discovered, departure, time);
        }
    }
 
    // 准备回溯
    // 设置顶点 `v` 的出发时间
    departure[time] = v;
    time++;
}
 
// 对给定 DAG 执行拓扑排序的函数
void doTopologicalSort(Graph const &graph, int n)
{
    // `departure[]` 使用出发时间作为索引存储顶点编号
    vector<int> departure(2*n, -1);
 
    /* 如果我们以相反的方式完成，即填充数组
       以使用顶点数作为索引的出发时间，我们将
       稍后需要排序 */
 
    // 跟踪是否发现了一个顶点
    vector<bool> discovered(n);
    int time = 0;
 
    // 对所有未发现的顶点执行 DFS
    for (int i = 0; i < n; i++)
    {
        if (!discovered[i]) {
            DFS(graph, i, discovered, departure, time);
        }
    }
 
    // 按递减顺序打印顶点
    // DFS中的出发时间，即按照拓扑顺序
    for (int i = 2*n - 1; i >= 0; i--)
    {
        if (departure[i] != -1) {
            cout << departure[i] << " ";
        }
    }
	
	cout << endl;
}
 
int main()
{
    // 根据上Graph的Graph边Vector
    vector<Edge> edges =
    {
        {0, 6}, {1, 2}, {1, 4}, {1, 6}, {3, 0}, {3, 4}, {5, 1}, {7, 0}, {7, 1}
    };
 
    // Graph中的节点总数(标记为 0 到 7)
    int n = 8;
 
    // 从给定的边构建一个Graph
    Graph graph(edges, n);
 
    // 进行拓扑排序
    doTopologicalSort(graph, n);
 
    return 0;
}