#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
	FILE *pFileA, *pFileB, *pMergedFile;
	char cFileAName[20], cFileBName[20], cFileMergeName[20], ch;
	
	printf("Enter First file Name \n");
	gets(cFileAName);
	
	printf("Enter Second file Name \n");
	gets(cFileBName);
	
	printf("Enter Merged file Name \n");
	gets(cFileMergeName);
	
	pFileA = fopen(cFileAName,"r");
	pFileB = fopen(cFileBName,"r");
	if(pFileA == NULL || pFileB == NULL)
	{
		printf("Error Occured..... Press any key to exit...... \n");
		exit(EXIT_FAILURE);
	}
	
	pMergedFile = fopen(cFileMergeName,"w");
	if(pMergedFile == NULL)
	{
		printf("Error Occured..... Press any key to exit...... \n");
		exit(EXIT_FAILURE);
	}
	
	while((ch = fgetc(pFileA)) != EOF)
		fputc(ch,pMergedFile);
	while((ch = fgetc(pFileB)) != EOF)
		fputc(ch,pMergedFile);
		
		printf("File %s and %s Merged Succesfully to %s \n",cFileAName, cFileBName, cFileMergeName);
		
		
	
	fclose(pFileA);
	fclose(pFileB);
	fclose(pMergedFile);
	
	getch();
	return 0;
	
}
