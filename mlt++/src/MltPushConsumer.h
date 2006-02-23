/**
 * MltPushConsumer.h - MLT Wrapper
 * Copyright (C) 2004-2005 Charles Yates
 * Author: Charles Yates <charles.yates@pandora.be>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef MLTPP_PUSH_CONSUMER_H
#define MLTPP_PUSH_CONSUMER_H

#include "config.h"

#include "MltConsumer.h"

namespace Mlt
{
	class Frame;
	class Service;
	class PushPrivate;

	class MLTPP_DECLSPEC PushConsumer : public Consumer
	{
		private:
			PushPrivate *m_private;
		public:
			PushConsumer( char *id , char *service = NULL );
			virtual ~PushConsumer( );
			void set_render( int width, int height, double aspect_ratio );
			virtual int connect( Service &service );
			int push( Frame *frame );
			int push( Frame &frame );
			int drain( );
			Frame *construct( int );
	};
}

#endif
