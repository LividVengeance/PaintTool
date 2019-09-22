#include "canvas.h"
#include "shape.h"

CCanvas::CCanvas() {

}

CCanvas::~CCanvas() {

}

bool CCanvas::Initialise(HWND _hwnd, int _iWidth, int _iHeight) {

}

CBackBuffer* GetBackBuffer() {
	return(true);
}

bool CCanvas::Draw(HDC _hdc) {
	auto iter = m_shapes.begin();
	while (iter != m_shapes.end())
	{
		(*iter)->Draw(_hdc);
		iter++;
	}
	return(true);
}

void CCanvas::Save(HWND _hwnd) {

}

void CCanvas::AddShape(IShape* _shape) {
	m_shapes.push_back(_shape)
}

void CCanvas::AddStamp(CStamp*);