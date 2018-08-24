\context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzo"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 2/4
		\clef "treble"
		\key a \major

		R2*10  |
		r4 r8 e'  |
		e' 2  |
		r16 e' e' e' b' 16. a' gis' 16  |
		gis' 8 a' 16 a' ~ a' 4 ~  |
%% 15
		a' 4 r8 gis'  |
		a' 8. d' 16 ~ d' 4  |
		r16 d' d' e' fis' 8 e'  |
		b 8 b b 16 cis' 8 b 16 ~  |
		b 4 r  |
%% 20
		R2*3  |
		r4 r8 d'  |
		d' 8. d' 16 ~ d' 8 d'  |
%% 25
		d' 8. d' 16 ~ d' 8 d'  |
		d' 8. d' 16 ~ d' 8 d'  |
		e' 4 ~ e'  |
		R2  |
		\time 4/4
		r2 r4 cis'  |
%% 30
		cis' 4. e' e' 4  |
		e' 4 d' 8 cis' 4 b b 8 ~  |
		b 8 cis' 2 r8 e' e'  |
		e' 4 e' 8 e' 4 gis' gis' 8 ~  |
		gis' 8 fis' 2 r8 r4  |
%% 35
		%R1*71  |
		%\bar "|."
	}

	\lyricsto "voz-mezzo" \new Lyrics \lyricmode {
		% intro

		% estrofa 1
		Je -- sús, a -- quí pre -- sen -- "te en" for -- ma re -- al, __
		te pi -- do __ un po -- co más de fe y "de hu" -- mil -- dad. __

		% estrofa 2
		%Qui -- sie -- ra __ po -- der ser dig -- no de com -- par -- tir __
		con -- ti -- "go el" mi -- la -- gro más gran -- de "de a" -- mor.

		% coro 1
		Mi -- la -- gro "de a" -- mor tan in -- fi -- ni -- to
		en que Tú, mi Dios, "te has" he -- cho
		%tan pe -- que -- "ño y" tan hu -- mil -- de
		%pa -- "ra en" -- trar en mí. __
	}
>>
