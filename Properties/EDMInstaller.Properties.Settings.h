﻿#pragma once

#include <memory>

//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version:4.0.30319.42000
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace EDMInstaller
{
	namespace Properties
	{
//C# TO C++ CONVERTER NOTE: The following .NET attribute has no direct equivalent in native C++:
//ORIGINAL LINE: [System.Runtime.CompilerServices.CompilerGeneratedAttribute()][System.CodeDom.Compiler.GeneratedCodeAttribute("Microsoft.VisualStudio.Editors.SettingsDesigner.SettingsSingleFileGenerator", "14.0.0.0")] internal sealed partial class Settings: System.Configuration.ApplicationSettingsBase
		class Settings final : public System::Configuration::ApplicationSettingsBase
		{

		private:
//C# TO C++ CONVERTER TODO TASK: Native C++ does not allow initialization of static non-const/integral fields in their declarations:
			static std::shared_ptr<Settings> defaultInstance = (std::static_pointer_cast<Settings>(System::Configuration::ApplicationSettingsBase::Synchronized(std::make_shared<Settings>())));

		public:
			const static std::shared_ptr<Settings> &getDefault() const
			{
				return defaultInstance;
			}

protected:
			std::shared_ptr<Settings> shared_from_this()
			{
				return std::static_pointer_cast<Settings>(System.Configuration.ApplicationSettingsBase::shared_from_this());
			}
		};
	}
}
