#pragma once

namespace DesignTimeContentSample
{
	namespace Models
	{
		[Windows::UI::Xaml::Data::Bindable]
		[Windows::Foundation::Metadata::WebHostHidden]
		public ref class Dinosaur sealed
		{
		public:
			Dinosaur();

			property Platform::String^ Name { Platform::String^ get(); void set(Platform::String^ value); }
			property Platform::String^ Order { Platform::String^ get(); void set(Platform::String^ value); }
			property Platform::String^ Thumbnail { Platform::String^ get(); void set(Platform::String^ value); }

		private:
			Platform::String^ m_name;
			Platform::String^ m_order;
			Platform::String^ m_thumbnail;
		};
	}
}


