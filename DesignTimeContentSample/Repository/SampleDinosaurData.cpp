#include "pch.h"

#include "SampleDinosaurData.h"

using namespace Platform::Collections;
using namespace DesignTimeContentSample::Repository;
using namespace Windows::Foundation::Collections;
using namespace DesignTimeContentSample::Models;

SampleDinosaurData::SampleDinosaurData()
{
	
}

IObservableVector<Dinosaur^>^ SampleDinosaurData::Dinosaurs::get()
{
	auto dinosaurs = ref new Platform::Collections::Vector<Dinosaur^>();

	auto tyrannosaurus = ref new Dinosaur();
	tyrannosaurus->Name = "Tyrannosaurus";
	tyrannosaurus->Order = "Saurischia";
	tyrannosaurus->Thumbnail = "//Assets/tyranosaurus.png";
	dinosaurs->Append(tyrannosaurus);

	auto diplodocus = ref new Dinosaur();
	diplodocus->Name = "Diplodocus";
	diplodocus->Order = "Saurischia";
	diplodocus->Thumbnail = "//Assets/diplodocus.png";
	dinosaurs->Append(diplodocus);

	auto triceratops = ref new Dinosaur();
	triceratops->Name = "Triceratops";
	triceratops->Order = "Ornithischia";
	triceratops->Thumbnail = "//Assets/triceratops.png";
	dinosaurs->Append(triceratops);
	return dinosaurs;
}
