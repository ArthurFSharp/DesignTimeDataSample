#include "pch.h"

#include "Dinosaur.h"

using namespace DesignTimeContentSample::Models;

Dinosaur::Dinosaur()
{
}

Platform::String^ Dinosaur::Name::get()
{
	return m_name;
}

void Dinosaur::Name::set(Platform::String^ value)
{
	if (value != m_name)
	{
		m_name = value;
	}
}

Platform::String^ Dinosaur::Order::get()
{
	return m_order;
}

void Dinosaur::Order::set(Platform::String^ value)
{
	if (value != m_order)
	{
		m_order = value;
	}
}

Platform::String^ Dinosaur::Thumbnail::get()
{
	return m_thumbnail;
}

void Dinosaur::Thumbnail::set(Platform::String^ value)
{
	if (value != m_thumbnail)
	{
		m_thumbnail = value;
	}
}
