#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

typedef struct Node
{
	char NameData[30];
	char PhonenumberData[30];
	char custom1Data[3][2][30];
	int favorite;
	struct Node * next;

} Node;

Node * head = NULL;
Node * Last = NULL;


void Add(char * name, char * phonenumber, char custom1[3][2][30])
{

	Node * New;
	New = (Node*)malloc(sizeof(Node));
	int i, j, k;

	strcpy(New->NameData, name);
	strcpy(New->PhonenumberData, phonenumber);
	New->favorite = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			for (k = 0; k < 30; k++)
			{
				New->custom1Data[i][j][k] = custom1[i][j][k];
			}
		}
	}
	New->next = NULL;

	if (head == NULL)
	{
		head = New;
		Last = New;
	}

	else
	{
		Last->next = New;
		Last = New;
	}

}

void Delete(char *phonenumber)
{
	if (head == NULL)
		printf("지울 데이터가 없습니다.\n");

	else
	{
		Node*temp = head->next;
		Node*tr = head;

		if (strcmp(head->PhonenumberData, phonenumber) == 0)
		{
			Node*De = head;
			head = head->next;
			free(De);
		}

		else
		{
			while (1)
			{

				if (temp == NULL)
				{
					printf("데이터가 없습니다.\n"); break;
				}

				else if (strcmp(phonenumber, temp->PhonenumberData) == 0)
				{
					Node*De = temp;
					tr->next = temp->next;
					free(De);
					break;
				}

				else
				{
					tr = temp;
					temp = temp->next;
				}

			}
		}
	}
}

void Look()
{
	int i = 0, j = 0, k = 0;
	Node*temp = head;

	if (head == NULL)
	{
		printf("보여줄 데이터가 없습니다.\n");
		return;
	}

	while (1)
	{
		printf("------------------------------------\n");
		printf("l이름 :%s 전화번호:%s\n", temp->NameData, temp->PhonenumberData);
		for (i = 0; i < 3; i++)
		{
			printf("%d번째 사용자 데이터 \n", i + 1);
			if (temp->custom1Data == 0)
			{
			}
			else
			{
				for (j = 0; j < 2; j++)
				{
					if (temp->custom1Data[i][j] != 0)
						printf("%s", temp->custom1Data[i][j]);
					else if (temp->custom1Data[i][j] == 0)
					{
						break;
					}
					printf("\n");
				}
			}
			printf("\n");
		}
		printf("....................................\n");
		temp = temp->next;
		if (temp == NULL)
			break;
		else
			printf("\n");
	}

}

void Search(char * Name)
{

	Node*temp = head;

	if (head == NULL)
	{
		printf("보여줄 데이터가 없습니다.\n");
		return;
	}

	while (1)
	{

		if (strcmp(Name, temp->NameData) == 0)
		{
			printf("%s 님의 전화번호는 %s 입니다.\n", temp->NameData, temp->PhonenumberData); return;
		}

		else if (temp->next == NULL)
		{
			printf("없는 이름입니다.\n"); return;
		}

		temp = temp->next;
	}

}

void SearchF(char * Name)
{
	Node*temp = head;

	if (head == NULL)
	{
		printf("데이터가 없습니다.\n");
		return;
	}

	while (1)
	{

		if (strcmp(Name, temp->NameData) == 0)
		{
			temp->favorite;
			if (temp->favorite == 1)
				printf("이미 추가된 사람입니다.\n ");
			else
			{
				temp->favorite += 1;
				printf("%s 님의 전화번호가 추가되었습니다.\n", Name);
				return;
			}
		}

		else if (temp->next == NULL)
		{
			printf("알 수없는 이름입니다.\n"); return;
		}
		temp = temp->next;
	}

}

int main()
{
	char phonenumber[15];
	int input;
	char name[15];
	char custom1[3][2][30] = { 0, };
	int dev = 0;
	int count = 0;
	char tmp[30] = { 0, };
	int k;

	while (1)
	{
		printf("[[ ADVANCED PHONEBOOK ]]\n");
		printf("----------\n");
		//MENU
		printf("| 0:추가\n");
		printf("| 1:제거\n");
		printf("| 2:보기\n");
		printf("| 3:종료\n");
		printf("| 4:검색\n");
		printf("| 5:즐겨찾기 추가\n");
		printf("| 6:즐겨찾기 보기\n");
		printf("선택 :");
		scanf("%d", &input);

		if (input == 0)
		{
			system("cls");
			printf("이름 : ");
			scanf("%s", name);
			printf("전화번호 :");
			scanf("%s", phonenumber);
			printf("추가할 데이터가 있나요? Y:1/N:0..");
			scanf("%d", &dev);
			if (dev)
			{
				printf("추가데이터 이름 : ");
				scanf("%s", tmp);
				for (k = 0; k < 30; k++)
				{
					custom1[count][0][k] = tmp[k];
					tmp[k] = 0;
				}
				printf("추가할 데이터 :");
				scanf("%s", tmp);
				for (k = 0; k < 30; k++)
				{
					custom1[count][1][k] = tmp[k];
					tmp[k] = 0;
				}
				printf("\n추가할 데이터가 있나요? Y:1/N:0..");
				scanf(" %d", &dev);
				if (dev)
				{
					count++;
					printf("추가데이터 이름 : ");
					scanf("%s", tmp);
					for (k = 0; k < 30; k++)
					{
						custom1[count][0][k] = tmp[k];
						tmp[k] = 0;
					}
					printf("추가할 데이터 :");
					scanf("%s", tmp);
					for (k = 0; k < 30; k++)
					{
						custom1[count][1][k] = tmp[k];
						tmp[k] = 0;
					}
					printf("\n추가할 데이터가 있나요? Y:1/N:0..");
					scanf(" %d", &dev);
					if (dev)
					{
						count++;
						printf("추가데이터 이름 : ");
						scanf("%s", tmp);
						for (k = 0; k < 30; k++)
						{
							custom1[count][0][k] = tmp[k];
							tmp[k] = 0;
						}
						printf("추가할 데이터 :");
						scanf("%s", tmp);
						for (k = 0; k < 30; k++)
						{
							custom1[count][1][k] = tmp[k];
							tmp[k] = 0;
						}

						Node * New;
						New = (Node*)malloc(sizeof(Node));
						int i, j, k;
						strcpy(New->NameData, name);
						strcpy(New->PhonenumberData, phonenumber);
						New->favorite = 0;
						for (i = 0; i < 3; i++)
						{
							for (j = 0; j < 2; j++)
							{
								for (k = 0; k < 30; k++)
								{
									New->custom1Data[i][j][k] = custom1[i][j][k];
								}
							}
						}
						New->next = NULL;

						if (head == NULL)
						{
							head = New;
							Last = New;
						}

						else
						{
							Last->next = New;
							Last = New;
						}
						printf("데이터가 모두 추가되었습니다.\n ");
					}
					else
					{
						Node * New;
						New = (Node*)malloc(sizeof(Node));
						int i, j, k;

						strcpy(New->NameData, name);
						strcpy(New->PhonenumberData, phonenumber);
						New->favorite = 0;
						for (i = 0; i < 3; i++)
						{
							for (j = 0; j < 2; j++)
							{
								for (k = 0; k < 30; k++)
								{
									New->custom1Data[i][j][k] = custom1[i][j][k];
								}
							}
						}
						New->next = NULL;

						if (head == NULL)
						{
							head = New;
							Last = New;
						}

						else
						{
							Last->next = New;
							Last = New;
						}
						printf("데이터가 모두 추가되었습니다.\n ");
					}
				}
				else
				{
					Node * New;
					New = (Node*)malloc(sizeof(Node));
					int i, j, k;

					strcpy(New->NameData, name);
					strcpy(New->PhonenumberData, phonenumber);
					New->favorite = 0;
					for (i = 0; i < 3; i++)
					{
						for (j = 0; j < 2; j++)
						{
							for (k = 0; k < 30; k++)
							{
								New->custom1Data[i][j][k] = custom1[i][j][k];
							}
						}
					}
					New->next = NULL;

					if (head == NULL)
					{
						head = New;
						Last = New;
					}

					else
					{
						Last->next = New;
						Last = New;
					}
					printf("데이터가 모두 추가되었습니다.\n ");
				}
			}
			else
			{
				Node * New;
				New = (Node*)malloc(sizeof(Node));
				int i, j, k;

				strcpy(New->NameData, name);
				strcpy(New->PhonenumberData, phonenumber);
				New->favorite = 0;
				for (i = 0; i < 3; i++)
				{
					for (j = 0; j < 2; j++)
					{
						for (k = 0; k < 30; k++)
						{
							New->custom1Data[i][j][k] = custom1[i][j][k];
						}
					}
				}
				New->next = NULL;

				if (head == NULL)
				{
					head = New;
					Last = New;
				}

				else
				{
					Last->next = New;
					Last = New;
				}
				printf("데이터가 모두 추가되었습니다.\n ");
			}
		}

		else if (input == 1)
		{
			system("cls");
			printf("삭제할 전화번호 :");
			scanf("%s", phonenumber);
			Delete(phonenumber);
		}

		else if (input == 2)
		{
			system("cls");
			Look();
		}

		else if (input == 3)
		{
			system("cls");
			printf("프로그램 종료\n");
			break;
		}
		else if (input == 4)
		{
			system("cls");
			printf("이름을 입력해주세요:");
			scanf("%s", name);
			Search(name);
		}
		else if (input == 5)
		{
			system("cls");

			printf("즐겨 찾기에 추가할 이름을 입력해주세요:");
			scanf("%s", name);
			SearchF(name);
		}
		else if (input == 6)
		{
			system("cls");
			int i, j;
			Node*temp = head;

			if (head == NULL)
			{
				printf("보여줄 데이터가 없습니다.\n");
				return 0;
			}
			if (temp->favorite == 1)
			{
				while (1)
				{
					printf("------------------------------------\n");
					printf("l이름 :%s 전화번호:%s\n", temp->NameData, temp->PhonenumberData);
					for (i = 0; i < 3; i++)
					{
						printf("%d번째 사용자 데이터 \n", i + 1);
						if (temp->custom1Data == 0)
						{
							printf("데이터 없음");
						}
						else
						{
							for (j = 0; j < 2; j++)
							{
								if (temp->custom1Data[i][j] != 0)
									printf("%s", temp->custom1Data[i][j]);
								else if (temp->custom1Data[i][j][k] == 0)
								{
									printf("데이터 없음");
								}
								printf("\n");
							}
						}

						printf("\n");
					}
					printf("....................................\n");
				temp = temp->next;
				if (temp == NULL)
					break;
				else
					printf("\n");
				}
			}

		}
		else
			printf("0,1,2,3,4,5 중에서 입력해주세요.\n");
	}
}