AIP=gforth-0.7.0.aip

all: installer

installer: $(AIP)
	AdvancedInstaller /build $(AIP)
