\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble_8"
		\key a \major

		R2*2  |
		cis' 2  |
		b 2  |
%% 5
		cis' 2  |
		b 2  |
		d' 2 ( ~ 
		% warning: overlong bar truncated here |
		d' 2  |
		cis' 2 )  |
%% 10
		b 2  |
		R2*8  |
		r4 r8 e  |
%% 20
		cis' 8. cis' 16 ~ cis' 4  |
		r16 b b b b 16. cis' b 16  |
		b 8 cis' 16 cis' ~ cis' 4 ~  |
		cis' 4 r8 gis  |
		a 8. a 16 ~ a 8 a  |
%% 25
		a 8. a 16 ~ a 8 a  |
		g 8. g 16 ~ g 8 g  |
		gis 4 ~ gis  |
		R2  |
	}

	\lyricsto "voz-tenor" \new Lyrics \lyricmode {
		% intro
		Uh ah. Uh ah. Uh __ ah.

		% estrofa 1
		%Je -- sús, a -- quí pre -- sen -- "te en" for -- ma re -- al, __
		%te pi -- do __ un po -- co más de fe y "de hu" -- mil -- dad. __

		% estrofa 2
		Qui -- sie -- ra __ po -- der ser dig -- no de com -- par -- tir __
		con -- ti -- "go el" mi -- la -- gro más gran -- de "de a" -- mor.

	}
>>
