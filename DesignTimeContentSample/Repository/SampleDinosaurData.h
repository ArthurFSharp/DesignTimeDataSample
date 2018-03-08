#pragma once

#include "Models\Dinosaur.h"

namespace DesignTimeContentSample
{
	namespace Repository
	{
		[Windows::UI::Xaml::Data::Bindable]
		[Windows::Foundation::Metadata::WebHostHidden]
		public ref class SampleDinosaurData sealed
		{
		public:
			SampleDinosaurData();

			property Windows::Foundation::Collections::IObservableVector<Models::Dinosaur^>^ Dinosaurs
			{
				Windows::Foundation::Collections::IObservableVector<Models::Dinosaur^>^ get();
			}
		};
	}
}