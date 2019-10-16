#include <iostream>
#include <list>
#include <conio.h>

using namespace std;
class Graph
{
  //it's required to use list to strore adjacent list
int iNumVertice;
list <int> *vList;
public:
Graph (int iNumVertice);

void EdgeAdding(int iVert, int iExplre);

void PrintBfsMovement(int iVistedNode);

};

Graph::Graph(int iNumVertice)
{
    this->iNumVertice = iNumVertice;
    //dynamic list creation
    this->vList = new list <int> [iNumVertice];
}

void Graph::EdgeAdding(int iVert, int iEntered)
{
    vList[iVert].push_back(iEntered);
}

void Graph::PrintBfsMovement(int iVistedNode)
{
    bool *bVisited = new bool[iNumVertice];
    for(int i = 0 ; i<iNumVertice; i++)
    {
        bVisited[i] = false;
    }
    
    //Create queue for BFS
    list <int> lQueue;
    
    //Mark visited node as true
    bVisited[iVistedNode] = true;
    lQueue.push_back(iVistedNode);
    
    // use iterator to get all adjacent vertices of the vertex
    list <int>::iterator i;
    
    while(!lQueue.empty())
    {
        iVistedNode = lQueue.front();
        cout<<iVistedNode<<" ";
        lQueue.pop_front();
        
        for(i = vList[iVistedNode].begin(); i!=vList[iVistedNode].end(); ++i)
        {
            if(!bVisited[*i])
            {
                bVisited[*i] = true;
                lQueue.push_back(*i);
            }
        }
    }
}

int main(int argc, char **argv)
{
    Graph pGraphObj(4);
    pGraphObj.EdgeAdding(0,1);
    pGraphObj.EdgeAdding(0,2);
    pGraphObj.EdgeAdding(1,2);
    pGraphObj.EdgeAdding(2,0);
    pGraphObj.EdgeAdding(2,3);
    pGraphObj.EdgeAdding(3,3);
     cout << "Following is Breadth First Traversal " << "(starting from vertex 2) \n"; 
     pGraphObj.PrintBfsMovement(2);
     _getch();
	return 0;
}
