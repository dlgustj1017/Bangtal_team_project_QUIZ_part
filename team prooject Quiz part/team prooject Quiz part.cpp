#include <bangtal.h>


SceneID scene1;
ObjectID start, quit, play, category1, category2, category3, category4;

//콜백함수 정의 
void mouseCallback(ObjectID object, int x, int y, MouseAction action)
{
	//종료 버튼이 눌려지면 게임 종료
	if (object == quit) {
		endGame();
	}

	//start 버튼을 누르면 
	else if (object = start) {

		//start 버튼, end 버튼 사라지게 한다. 
		hideObject(start);
		hideObject(quit);
	}
}

//메인 함수
int main() {

	//콜백 함수 등록
	setMouseCallback(mouseCallback);

	//장면 생성
	scene1 = createScene("dungeonbackground", "dungeonbackground.png");

	//start 버튼
	start = createObject("startbutton.png");
	locateObject(start, scene1, 800, 300);
	scaleObject(start, 0.3f);
	showObject(start);

	//end 버튼
	quit = createObject("endbutton.png");
	locateObject(quit, scene1, 1000, 320);
	scaleObject(quit, 0.4f);
	showObject(quit);


	//게임 카테고리 생성
	//카테고리1: 넌센스 퀴즈
	category1 = createObject("redbutton.png");
	locateObject(category1, scene1, 200, 400);
	

	//카테고리2: 수학 퀴즈
	category2 = createObject("greenbutton.png");
	locateObject(category2, scene1, 600, 400);
	

	//카테고리3: 영어단어 퀴즈
	category3 = createObject("yellowbutton.png");
	locateObject(category3, scene1, 800, 400);
	

	//카테고리4: 프로그래밍 퀴즈
	category4 = createObject("pinkbutton.png");
	locateObject(category4, scene1, 1000, 400);

	startGame(scene1);
}