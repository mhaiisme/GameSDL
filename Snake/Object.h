#ifndef OBJECT_H_
#define OBJECT_H_

#include "CommonFunc.h"

class Object {
private:
	SDL_Texture* texture_;
	SDL_Rect rect_;
	SDL_Texture* text_;

public:
	Object();
	~Object();

	bool LoadImg(const std::string& path, SDL_Renderer* renderer);
	void RenderBackGround(SDL_Renderer* renderer);
	void Free();
};

#endif // OBJECT_H_
