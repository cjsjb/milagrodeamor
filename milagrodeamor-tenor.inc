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
		d' 2 ( ~  |
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
		r2 r4 e  |
%% 30
		e 4. a a 4  |
		gis 4 a 8 b 4 gis gis 8 ~  |
		gis 8 a 2 r8 a a  |
		gis 4 a 8 b 4 cis' b 8 ~  |
		b 8 a 2 r8 fis fis  |
%% 35
		fis 4 fis 8 gis 4. a 4  |
		a 4 e 8 e 4. fis 4  |
		fis 8 e 4 e 8 ~ e 2 ~  |
		e 2 r4 e  |
		e 4. cis' cis' 4  |
%% 40
		b 4 cis' 8 d' 4 b b 8 ~  |
		b 8 cis' 2 r8 cis' cis'  |
		b 4 cis' 8 d' 4 e' d' 8 ~  |
		d' 8 d' 2 r8 a a  |
		a 4 a 8 b 4. cis' 4  |
%% 45
		cis' 8 a 4 a a gis 8 ~  |
		gis 1 ~  |
		gis 2. r4  |
		R1*7  |
%% 55
		r2 r4 e  |
		e 4. e 8 ~ e 2  |
		r4 e 8 e b 8. a gis 8  |
		gis 4 ( a 8 ) a ( ~ a 2  |
		b 2 ) r8 gis gis gis  |
%% 60
		a 4. d e 4  |
		fis 4. e 4 d cis 8  |
		e 2. ~ e 4  |
		e 2 r4 e 8 e  |
		cis' 4. cis' 8 ~ cis' 2  |
%% 65
		r4 b 8 b b 8. cis' b 8  |
		b 4 ( cis' 8 ) cis' ~ cis' 2 ~  |
		cis' 2 r8 gis gis gis  |
		a 4. ~ a a 4  |
		a 4. a r4  |
%% 70
		R1  |
		r8 e e fis gis a b cis' ( ~  |
		cis' 8 b 4 a e 8 fis 4  |
		e 2 ) r4 a  |
		b 4 a 8 gis 4 e e 8 ~  |
%% 75
		e 8 a 2 r8 a a  |
		b 4 a 8 b 4 cis' cis' 8 ~  |
		cis' 8 d' 2 r8 a a  |
		a 4 a 8 b 4. cis' 4  |
		cis' 4 a 8 a 4. a 4  |
%% 80
		a 8 gis 4 b 8 ~ b 2 ~  |
		b 2 r4 e  |
		e 4. cis' cis' 4  |
		b 4 cis' 8 d' 4 b b 8 ~  |
		b 8 cis' 2 r8 cis' cis'  |
%% 85
		b 4 cis' 8 d' 4 e' d' 8 ~  |
		d' 8 d' 2 r8 a a  |
		a 4 a 8 b 4. cis' 4  |
		cis' 8 a 4 a a gis 8 ~  |
		gis 1 ~  |
%% 90
		gis 2. r4  |
		cis' 4. a cis' 4  |
		b 2. r8 b  |
		cis' 4. a ( ~ a 4  |
		b 4 -\staccato ) r r2  |
%% 95
		R1  |
		r4 e cis' b  |
		cis' 1  |
		r4 e cis' b  |
		cis' 4. ( b a 4  |
%% 100
		b 2.. ) r8  |
		cis' 1  |
		b 2. b 4  |
		cis' 1 ~  |
		cis' 1  |
	}

	\lyricsto "voz-tenor" \new Lyrics \lyricmode {
		% intro
		Uh, ah, uh, ah, uh, __ ah.

		% estrofa 1
		%Je -- sús, a -- quí pre -- sen -- "te en" for -- ma re -- al, __
		%te pi -- do __ un po -- co más de "fe y" "de hu" -- mil -- dad. __

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
		"Y hoy" ven -- go __ lle -- no de a -- le -- grí __ a __
		a re -- ci -- bir -- te en es -- "ta eu" -- ca -- ris -- tí __ a.

		% estrofa 4
		Te doy gra -- cias __ por lla -- mar -- "me a es" -- ta ce __ na, __
		por -- "que aun" -- que no __ soy dig -- no...
		Ven a mi al -- ma, Se -- ñor. __

		% coro 3
		"...de a" -- mor tan in -- fi -- ni __ to
		en que Tú, mi Dios, "te has" he __ cho
		tan pe -- que -- "ño y" tan hu -- mil -- de
		pa -- "ra en" -- trar en mí. __

		% coro 4
		Mi -- la -- gro "de a" -- mor tan in -- fi -- ni __ to
		en que Tú, mi Dios, "te ol" vi __ das
		de tu glo -- "ria y" de tu ma -- jes -- tad por mí. __

		% puente
		Gra -- cias, Se -- ñor,
		por es -- ta... __

		% finale
		Gra -- cias, Je -- sús.
		Gra -- cias, Je -- sús. __
		Gra -- cias, Je -- sús. __
	}
>>
