
#ifndef OPENAV_AVTK_BITCRUSHER_HXX
#define OPENAV_AVTK_BITCRUSHER_HXX

#include "widget.hxx"

namespace Avtk
{

class Bitcrusher : public Widget
{
public:
	Bitcrusher( Avtk::UI* ui, int x, int y, int w, int h, std::string label);
	virtual ~Bitcrusher() {}

	virtual void draw( cairo_t* cr );
};

};

#endif // OPENAV_AVTK_BITCRUSHER_HXX
