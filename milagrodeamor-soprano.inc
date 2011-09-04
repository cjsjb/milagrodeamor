\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"
		\key a \major

		R1*7  |
		r2. e' 4  |
		e' 1  |
%% 10
		r8 e' e' e' b' 8. a' gis' 8  |
		gis' 4 a' 8 a' ~ a' 2 ~  |
		a' 2 r4 gis'  |
		a' 4. d' 8 ~ d' 2  |
		r8 d' d' e' fis' 4 e'  |
%% 15
		b 4. b 4 cis' b 8 ~  |
		b 2 r4 e'  |
		e' 4. e' 8 ~ e' 2  |
		r8 e' e' e' b' 8. a' gis' 8  |
		gis' 4 a' 8 a' ~ a' 2 ~  |
%% 20
		a' 2 r4 gis'  |
		a' 4. d' e' 4  |
		fis' 4. e' d' 4  |
		b 4. b cis' 4  |
		b 1  |
%% 25
		R1*80  |
		\bar "|."
	}

	\lyricsto "voz-soprano" \new Lyrics \lyricmode {
		% estrofa 1
		Je -- sús, a -- quí pre -- sen -- "te en" for -- ma re -- al,
		te pi -- do un po -- co más de "fe y" "de hu" -- mil -- dad.

		% estrofa 2
		Qui -- sie -- ra po -- der ser dig -- no de com -- par -- tir
		con -- ti -- "go el" mi -- la -- gro más gran -- de "de a" -- mor.
	}
>>
