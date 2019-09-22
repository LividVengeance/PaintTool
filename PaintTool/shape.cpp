#include "shape.h"

IShape::IShape() {

}
IShape::~IShape() {
}


void IShape::SetStartX(int _iStartX) {
	m_iStartX = _iStartX;
}

void IShape::SetEndX(int _iEndX) {
	m_iEndX = _iStartX;
}

void IShape::SetStartY(int _iStartX) {
	m_iStartY = _iStartY;
}

void IShape::SetEndY(int _iStartX) {
	m_iEndY = _iEndY;
}