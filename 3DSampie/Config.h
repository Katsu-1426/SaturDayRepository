#pragma once
namespace Config 
{
	//‰æ‘œİ’è
	constexpr int SCREEN_WIDTH = 1280;
	constexpr int SCREEN_HEIGHT = 720;

	//‰æ‘œ•ªŠ„ˆÊ’u
	constexpr int SCREEN_CENTER_X = SCREEN_WIDTH / 2;

	//2D‰~‚Ìİ’è
	constexpr int CIRCLE_RADIUS = 50;
	constexpr float CIRCLE_SPEED = 90.0f;
	constexpr float CIRCLE_START_Y = 580.0f;
	constexpr float CIRCLE_END_Y = 180.0f;
	//3D‹…‚Ìİ’è
	constexpr float SPHHERE_RADIUS = 80.0f;
	constexpr float SPHHERE_SPEED = 180.0f;
	constexpr float SPHHERE_START_Z = 850.0f;
	constexpr float SPHHERE_END_Z = -600.0f;
	constexpr float SPHHERE_X = 100.0f;

	//ƒJƒƒ‰İ’è
	constexpr float CAMERA_Z = -1000.0f;
	constexpr float CAMERA_TARGET_Z = 0.0f;
	constexpr float CAMERA_NEAR = 1.0f;
	constexpr float CAMERA_FAR = 5000.0f;

	constexpr float PI = 3.14159265f;

}