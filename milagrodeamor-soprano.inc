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

		\clef "treble"
		\key a \major

		R2*2  |
		a' 2  |
		gis' 2  |
%% 5
		a' 2  |
		gis' 2  |
		a' 2 ~  |
		a' 2 ~  |
		a' 2  |
%% 10
		gis' 2  |
		r4 r8 e'  |
		e' 2  |
		r16 e' e' e' b' 16. a' gis' 16  |
		gis' 8 a' 16 a' ~ a' 4 ~  |
%% 15
		a' 4 r8 gis'  |
		a' 8. d' 16 ~ d' 4  |
		r16 d' d' e' fis' 8 e'  |
		b 8 ~ b b 16 e' 8 e' 16 ~  |
		e' 4 r8 e'  |
%% 20
		e' 8. e' 16 ~ e' 4  |
		r16 e' e' e' b' 16. a' gis' 16  |
		gis' 8 a' 16 a' ~ a' 4 ~  |
		a' 4 r8 gis'  |
		a' 8. d' 16 ~ d' 8 e'  |
%% 25
		fis' 8. e' 16 ~ e' 8 d'  |
		b 8. b 16 ~ b 8 cis'  |
		b 4 ~ b  |
		R2  |
		r2 r4 e'  |
%% 30
		e' 4. a' a' 4  |
		gis' 4 a' 8 b' 4 gis' gis' 8 ~  |
		gis' 8 a' 2 r8 a' a'  |
		gis' 4 a' 8 b' 4 cis'' b' 8 ~  |
		b' 8 a' 2 r8 fis' fis'  |
%% 35
		fis' 4 fis' 8 gis' 4. a' 4  |
		a' 4 e' 8 e' 4. fis' 4  |
		fis' 8 e' 4 e' 8 ~ e' 2 ~  |
		e' 2 r4 e'  |
		e' 4. a' a' 4  |
%% 40
		gis' 4 a' 8 b' 4 gis' gis' 8 ~  |
		gis' 8 a' 2 r8 a' a'  |
		gis' 4 a' 8 b' 4 cis'' b' 8 ~  |
		b' 8 a' 2 r8 fis' fis'  |
		fis' 4 fis' 8 gis' 4. a' 4  |
%% 45
		a' 8 e' 4 e' fis' e' 8 ~  |
		e' 1 ~  |
		e' 2. r4  |
		R1*8  |
		a' 1  |
		gis' 1  |
		a' 1  |
		gis' 1  |
%% 60
		a' 1  |
		a' 4. a' 4 a' gis' 8  |
		g' 1  |
		gis' 2 r4 e' 8 e'  |
		e' 4. e' 8 ~ e' 2  |
%% 65
		r4 e' 8 e' b' 8. a' gis' 8  |
		gis' 4 ( a' 8 ) a' ~ a' 2 ~  |
		a' 2 r8 gis' gis' gis'  |
		a' 4. ( d' ) e' 4  |
		fis' 4. e' d' 4  |
%% 70
		b 4 b 8 b 4. cis' 4  |
		b 4. b ~ b 4 ~  |
		b 2 r4 e'  |
		e' 4. a' a' 4  |
		gis' 4 a' 8 b' 4 gis' gis' 8 ~  |
%% 75
		gis' 8 a' 2 r8 a' a'  |
		gis' 4 a' 8 b' 4 cis'' b' 8 ~  |
		b' 8 a' 2 r8 fis' fis'  |
		fis' 4 fis' 8 gis' 4. a' 4  |
		a' 4 e' 8 e' 4. fis' 4  |
%% 80
		fis' 8 e' 4 e' 8 ~ e' 2 ~  |
		e' 2 r4 e'  |
		e' 4. a' a' 4  |
		gis' 4 a' 8 b' 4 gis' gis' 8 ~  |
		gis' 8 a' 2 r8 a' a'  |
%% 85
		gis' 4 a' 8 b' 4 cis'' b' 8 ~  |
		b' 8 a' 2 r8 fis' fis'  |
		fis' 4 fis' 8 gis' 4. a' 4  |
		a' 8 e' 4 e' fis' e' 8 ~  |
		e' 1 ~  |
%% 90
		e' 2. r4  |
		a' 4. fis' a' 4  |
		gis' 2. r8 gis'  |
		a' 4. fis' ( ~ fis' 4  |
		gis' 4 -\staccato ) r a' gis'  |
%% 95
		a' 2.. a' 8  |
		b' 4 a' 8 gis' 4. e' 8 fis' ~  |
		fis' 8 a' 2.. (  |
		gis' 2. ) gis' 4  |
		a' 1 (  |
%% 100
		gis' 2.. ) r8  |
		a' 1  |
		gis' 2. gis' 4  |
		a' 1 ~  |
		a' 1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-soprano" {
		% intro
		Uh, ah, uh, ah, uh, __ ah.

		% estrofa 1
		Je -- sús, a -- quí pre -- sen -- "te en" for -- ma re -- al, __
		te pi -- do __ un po -- co más de "fe y" "de hu" -- mil -- dad. __

		% estrofa 2
		Qui -- sie -- ra __ po -- der ser dig -- no de com -- par -- tir __
		con -- ti -- "go el" mi -- la -- gro __ más gran -- de __ "de a" -- mor. __

		% coro 1
		Mi -- la -- gro "de a" -- mor tan in -- fi -- ni __ to
		en que Tú, mi Dios, "te has" he __ cho
		tan pe -- que -- "ño y" tan hu -- mil -- de
		pa -- "ra en" -- trar en mí. __

		% coro 2
		Mi -- la -- gro "de a" -- mor tan in -- fi -- ni __ to
		en que Tú, mi Dios, "te ol" vi __ das
		de tu glo -- "ria y" de tu ma -- jes -- tad por mí. __

		% estrofa 3
		%"Y hoy" ven -- go __ lle -- no de a -- le -- grí -- a __
		%a re -- ci -- bir -- te en es -- "ta eu" -- ca -- ris -- tí -- a.
		Uh, ah, uh, ah,
		uh, uh... "...eu" -- ca -- ris -- tí -- a.

		% estrofa 4
		Te doy gra -- cias __ por lla -- mar -- "me a es" -- ta ce __ na, __
		por -- "que aun" -- que no __ soy dig -- no vi -- si -- tas Tú mi al -- ma. __

		% coro 3
		Mi -- la -- gro "de a" -- mor tan in -- fi -- ni __ to
		en que Tú, mi Dios, "te has" he __ cho
		tan pe -- que -- "ño y" tan hu -- mil -- de
		pa -- "ra en" -- trar en mí. __

		% coro 4
		Mi -- la -- gro "de a" -- mor tan in -- fi -- ni __ to
		en que Tú, mi Dios, "te ol" vi __ das
		de tu glo -- "ria y" de tu ma -- jes -- tad por mí. __

		% puente
		Gra -- cias, Se -- ñor,
		por es -- ta __
		co -- mu -- nión.

		% finale
		"Tu a" -- mor es in -- fi -- ni __ to, __
		Je -- sús. __
		Gra -- cias, Je -- sús. __
	}
>>
