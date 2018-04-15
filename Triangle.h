#pragma once

#include "Vertex"
#include "Edge.h"

class Trangle
{
public:
	Triangle();
	~Triangle();

	bool ContainsVert(const& Vertex vert);
	bool CircumCircleContainsVert(const& Vertex vert);

private:
	Vertex p1;
	Vertex p2;
	Vertex p3;

	Edge e1;
	Edge e2;
	Edge e3;
}