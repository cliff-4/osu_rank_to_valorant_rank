#include <stdio.h>
#include <string.h>

int main() {
	int rank;
	printf("Rank (Enter 0 to exit): ");
	scanf("%d", &rank);
	if (rank == 0) exit(0);
	char rank_in_words[20];
	switch ((int)(1000 * (1 - ((rank - 1) / 2838795.0)))) {
		case 0 ... 30-1: strcpy(rank_in_words, "Iron 1"); break;
		case 30 ... 85-1: strcpy(rank_in_words, "Iron 2"); break;
		case 85 ... 164-1: strcpy(rank_in_words, "Iron 3"); break;
		case 164 ... 248-1: strcpy(rank_in_words, "Bronze 1"); break;
		case 248 ... 343-1: strcpy(rank_in_words, "Bronze 2"); break;
		case 343 ... 437-1: strcpy(rank_in_words, "Bronze 3"); break;
		case 437 ... 533-1: strcpy(rank_in_words, "Silver 1"); break;
		case 533 ... 624-1: strcpy(rank_in_words, "Silver 2"); break;
		case 624 ... 710-1: strcpy(rank_in_words, "Silver 3"); break;
		case 710 ... 780-1: strcpy(rank_in_words, "Gold 1"); break;
		case 780 ... 836-1: strcpy(rank_in_words, "Gold 2"); break;
		case 836 ... 881-1: strcpy(rank_in_words, "Gold 3"); break;
		case 881 ... 914-1: strcpy(rank_in_words, "Platinum 1"); break;
		case 914 ... 938-1: strcpy(rank_in_words, "Platinum 2"); break;
		case 938 ... 956-1: strcpy(rank_in_words, "Platinum 3"); break;
		case 956 ... 969-1: strcpy(rank_in_words, "Diamond 1"); break;
		case 969 ... 979-1: strcpy(rank_in_words, "Diamond 2"); break;
		case 979 ... 988-1: strcpy(rank_in_words, "Diamond 3"); break;
		case 988 ... 999-1: strcpy(rank_in_words, "Immortal"); break;
		case 999 ... 1000: strcpy(rank_in_words, "Radiant"); break;
	};
	printf("Corresponding rank: %s\n\n", rank_in_words);
	main();
}