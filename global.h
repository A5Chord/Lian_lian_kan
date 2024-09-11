#pragma once     //Ϊ�˷�ֹͷ�ļ����ظ�����

typedef struct tagVertex
{
	int row;     //��
	int col;     //��
	int info;    //��Ϣ��
}Vertex;

//#define MAX_ROW				10	  //��ʼ��������*�б���Ϊż����
//#define MAX_COL				12	  //��ʼ����
#define BLANK				-1
#define MAX_VERTEX_NUM      120   //��󶥵���
#define MAX_PIC_NUM         10    //ͼƬ��ɫ
#define MAX_REPEAT_NUM          12    //ÿ�ֻ�ɫͼƬ����
#define MAP_TOP             50    //��Ϸ��ͼ���Ͻ�������
#define MAP_LETF            250    //��Ϸ��ͼ���ϽǺ�����
#define PIC_HEIGHT          50    //��Ϸ��ͼ�߶�
#define PIC_WIDTH           50    //��Ϸ��ͼ���

#define PLAY_TIMER_ID      1     //��ʱ���ı��dd

#define GAME_LOSE           -1   //ʧ��
#define GAME_SUCCESS        0    //��ʤ
#define GAME_PLAY           1    //��Ϸ���ڽ���