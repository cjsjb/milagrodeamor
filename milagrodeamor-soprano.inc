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
		r2 r4 e'  |
		e' 4. a' a' 4  |
		gis' 4 a' 8 b' 4 gis' gis' 8 ~  |
		gis' 8 a' 2 r8 a' a'  |
		gis' 4 a' 8 b' 4 cis'' b' 8 ~  |
%% 30
		b' 8 a' 2 r8 fis' fis'  |
		fis' 4 fis' 8 gis' 4. a' 4  |
		a' 4 e' 8 e' 4. fis' 4  |
		fis' 8 e' 4 e' 8 ~ e' 2 ~  |
		e' 2 r4 e'  |
%% 35
		e' 4. a' a' 4  |
		gis' 4 a' 8 b' 4 gis' gis' 8 ~  |
		gis' 8 a' 2 r8 a' a'  |
		gis' 4 a' 8 b' 4 cis'' b' 8 ~  |
		b' 8 a' 2 r8 fis' fis'  |
%% 40
		fis' 4 fis' 8 gis' 4. a' 4  |
		a' 8 e' 4 e' fis' e' 8 ~  |
		e' 1  |
		r2. e' 4  |
		e' 4. e' 8 ~ e' 2  |
%% 45
		r4 e' 8 e' b' 8. a' gis' 8  |
		gis' 4 ( a' 8 ) a' ~ a' 2 ~  |
		a' 2 r8 gis' gis' gis'  |
		a' 4. d' e' 4  |
		fis' 4. e' 4 d' cis' 8  |
%% 50
		b 2. ( cis' 4 )  |
		b 2 r4 e' 8 e'  |
		e' 4. e' 8 ~ e' 2  |
		r4 e' 8 e' b' 8. a' gis' 8  |
		gis' 4 ( a' 8 ) a' ~ a' 2  |
%% 55
		r2 r8 gis' gis' gis'  |
		a' 4. ( d' ) e' 4  |
		fis' 4. e' d' 4  |
		b 4 b 8 b 4. cis' 4  |
		b 4. b ~ b 4  |
%% 60
		r2. e' 4  |
		e' 4. a' a' 4  |
		gis' 4 a' 8 b' 4 gis' gis' 8 ~  |
		gis' 8 a' 2 r8 a' a'  |
		gis' 4 a' 8 b' 4 cis'' b' 8 ~  |
%% 65
		b' 8 a' 2 r8 fis' fis'  |
		fis' 4 fis' 8 gis' 4. a' 4  |
		a' 4 e' 8 e' 4. fis' 4  |
		fis' 8 e' 4 e' 8 ~ e' 2 ~  |
		e' 2 r4 e'  |
%% 70
		e' 4. a' a' 4  |
		gis' 4 a' 8 b' 4 gis' gis' 8 ~  |
		gis' 8 a' 2 r8 a' a'  |
		gis' 4 a' 8 b' 4 cis'' b' 8 ~  |
		b' 8 a' 2 r8 fis' fis'  |
%% 75
		fis' 4 fis' 8 gis' 4. a' 4  |
		a' 8 e' 4 e' fis' e' 8 ~  |
		e' 1  |
		R1  |
		a' 4. fis' a' 4  |
%% 80
		gis' 2. r8 gis'  |
		a' 4 gis' 8 fis' 4. a' 4  |
		b' 1 ~  |
		b' 2 r4 e'  |
		e' 4. a' a' 4  |
%% 85
		gis' 4 a' 8 b' 4 gis' gis' 8 ~  |
		gis' 8 a' 2 r8 a' a'  |
		gis' 4 a' 8 b' 4 cis'' b' 8 ~  |
		b' 8 a' 2 r8 fis' fis'  |
		fis' 4 fis' 8 gis' 4. a' 4  |
%% 90
		a' 4 e' 8 e' 4. fis' 4  |
		fis' 8 e' 4 e' 8 ~ e' 2 ~  |
		e' 2 r4 e'  |
		e' 4. a' a' 4  |
		gis' 4 a' 8 b' 4 gis' gis' 8 ~  |
%% 95
		gis' 8 a' 2 r8 a' a'  |
		gis' 4 a' 8 b' 4 cis'' b' 8 ~  |
		b' 8 a' 2 r8 fis' fis'  |
		fis' 4 fis' 8 gis' 4. a' 4  |
		a' 8 e' 4 e' fis' e' 8 ~  |
%% 100
		e' 1  |
		r2 r4 gis'  |
		a' 1 ~  |
		a' 1  |
		R1  |
		\bar "|."
	}

	\lyricsto "voz-soprano" \new Lyrics \lyricmode {
		% estrofa 1
		Je -- sús, a -- quí pre -- sen -- "te en" for -- ma re -- al, __
		te pi -- do __ un po -- co más de "fe y" "de hu" -- mil -- dad. __

		% estrofa 2
		Qui -- sie -- ra __ po -- der ser dig -- no de com -- par -- tir __
		con -- ti -- "go el" mi -- la -- gro más gran -- de "de a" -- mor.

		% coro 1
		Mi -- la -- gro "de a" -- mor tan in -- fi -- ni -- to
		en que Tú, mi Dios, "te has" he -- cho
		tan pe -- que -- "ño y" tan hu -- mil -- de
		pa -- "ra en" -- trar en mí. __

		% coro 2
		Mi -- la -- gro "de a" -- mor tan in -- fi -- ni -- to
		en que Tú, mi Dios, "te ol" vi -- das
		de tu glo -- "ria y" de tu ma -- jes -- tad por mí. __

		% estrofa 3
		"Y hoy" ven -- go lle -- no de a -- le -- grí -- a
		a re -- ci -- bir -- te en es -- "ta eu" -- ca -- ris -- tí -- a.

		% estrofa 4
		Te doy gra -- cias por lla -- mar -- "me a es" -- ta ce -- na,
		por -- "que aun" -- que no soy dig -- no vi -- si -- tas tú mi al -- ma.

		% coro 3
		Mi -- la -- gro "de a" -- mor tan in -- fi -- ni -- to
		en que Tú, mi Dios, "te has" he -- cho
		tan pe -- que -- "ño y" tan hu -- mil -- de
		pa -- "ra en" -- trar en mí. __

		% coro 4
		Mi -- la -- gro "de a" -- mor tan in -- fi -- ni -- to
		en que Tú, mi Dios, "te ol" vi -- das
		de tu glo -- "ria y" de tu ma -- jes -- tad por mí. __

		% puente
		Gra -- cias, Se -- ñor,
		por es -- ta co -- mu -- nión.

		% coro 5
		Mi -- la -- gro "de a" -- mor tan in -- fi -- ni -- to
		en que Tú, mi Dios, "te has" he -- cho
		tan pe -- que -- "ño y" tan hu -- mil -- de
		pa -- "ra en" -- trar en mí. __

		% coro 6
		Mi -- la -- gro "de a" -- mor tan in -- fi -- ni -- to
		en que Tú, mi Dios, "te ol" vi -- das
		de tu glo -- "ria y" de tu ma -- jes -- tad por mí. __

		% finale
		Por mí.
	}
>>
