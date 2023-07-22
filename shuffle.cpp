// shuffle.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE_OF_ARRAY(array)    (sizeof(array)/sizeof(array[0]))
#define SWAP(type,a,b)          { type work = a; a = b; b = work; }

static void random_shuffle(int* array, size_t size);
static void print_array(const int* array, size_t size);

int main(void)
{
    int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    srand((unsigned int)time(NULL));

    random_shuffle(array, SIZE_OF_ARRAY(array));
    print_array(array, SIZE_OF_ARRAY(array));

    return 0;
}

/*
    配列の要素をランダムシャッフルする
*/
void random_shuffle(int* array, size_t size)
{
    for (size_t i = 0; i < size; ++i) {
        size_t a = rand() % size;
        size_t b = rand() % size;
        SWAP(int, array[a], array[b]);
    }
}

/*
    配列の要素を出力
*/
void print_array(const int* array, size_t size)
{
    for (size_t i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
