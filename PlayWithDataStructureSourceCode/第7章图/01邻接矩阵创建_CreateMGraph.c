#include<stdio.h>    
#include<stdlib.h>   
#include<io.h>  
#include<math.h>  
#include<time.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXVEX 100 /* ï¿½ï¿½ó¶¥µï¿½ï¿½ï¿½ï¿½ï¿½Ó¦ï¿½ï¿½ï¿½Ã»ï¿½ï¿½ï¿½ï¿½ï¿½ */
#define INIT -1 

typedef int Status;	/* Statusï¿½Çºï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½,ï¿½ï¿½Öµï¿½Çºï¿½ï¿½ï¿½ï¿½ï¿½ï¿½×´Ì¬ï¿½ï¿½ï¿½ë£¬ï¿½ï¿½OKï¿½ï¿½ */
typedef char VertexType; /* ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ó¦ï¿½ï¿½ï¿½Ã»ï¿½ï¿½ï¿½ï¿½ï¿½  */
typedef int EdgeType; /* ï¿½ï¿½ï¿½Ïµï¿½È¨Öµï¿½ï¿½ï¿½ï¿½Ó¦ï¿½ï¿½ï¿½Ã»ï¿½ï¿½ï¿½ï¿½ï¿½ */
typedef struct
{
	VertexType vexs[MAXVEX]; /* ï¿½ï¿½ï¿½ï¿½ï¿½ */
	EdgeType arc[MAXVEX][MAXVEX];/* ï¿½Ú½Ó¾ï¿½ï¿½ó£¬¿É¿ï¿½ï¿½ï¿½ï¿½ß±ï¿½ */
	int numNodes, numEdges; /* Í¼ï¿½Ðµï¿½Ç°ï¿½Ä¶ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Í±ï¿½ï¿½ï¿½  */
}MGraph;

/* ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Í¼ï¿½ï¿½ï¿½Ú½Ó¾ï¿½ï¿½ï¿½ï¿½Ê¾ */
void CreateMGraph(MGraph *G)
{
	int i,j,k,w;
	printf("ÊäÈë¶¥µãÊýºÍ±ßÊý:\n");
	scanf("%d,%d",&G->numNodes,&G->numEdges); /* ï¿½ï¿½ï¿½ë¶¥ï¿½ï¿½ï¿½ï¿½ï¿½Í±ï¿½ï¿½ï¿½ */
	for(i = 0;i <G->numNodes;i++) /* ï¿½ï¿½ï¿½ë¶¥ï¿½ï¿½ï¿½ï¿½Ï¢,ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ */
		scanf(&G->vexs[i]);
	for(i = 0;i <G->numNodes;i++)
		for(j = 0;j <G->numNodes;j++)
			G->arc[i][j]=INIT;	/* ï¿½Ú½Ó¾ï¿½ï¿½ï¿½ï¿½Ê¼ï¿½ï¿½ */
	for(k = 0;k <G->numEdges;k++) /* ï¿½ï¿½ï¿½ï¿½numEdgesï¿½ï¿½ï¿½ß£ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ú½Ó¾ï¿½ï¿½ï¿½ */
	{
		printf("ÊäÈë±ß(vi,vj)ÉÏµÄÏÂ±êi£¬ÏÂ±êj£¬ºÍÈ¨w:\n");
		scanf("%d,%d,%d",&i,&j,&w); /* ï¿½ï¿½ï¿½ï¿½ï¿½(vi,vj)ï¿½Ïµï¿½È¨w */
		G->arc[i][j]=w; 
		G->arc[j][i]= G->arc[i][j]; /* ï¿½ï¿½Îªï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Í¼ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ô³ï¿½ */
	}
}

int main(void)
{    
	MGraph G;    
	CreateMGraph(&G);
	
	return 0;
}

