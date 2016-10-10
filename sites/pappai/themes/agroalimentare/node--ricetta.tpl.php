<?php
$a=0;

$url = $GLOBALS['base_url'];

?>
    <div class="row">
        <div class="col-md-12">
            <div class="prodotto-bar">
                <?php
                if ($content['field_tipologia']) { ?>
                    <?php print render($content['field_tipologia']); ?>
                <?php } ?>
                <?php
                if ($content['field_abitudine_alimentare']) { ?>
                    <?php print render($content['field_abitudine_alimentare']); ?>
                <?php } ?>
            </div>
        </div>
    </div>
    <div class="col-md-3">

        <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
            <div class="prodotto-box">
                <div class="prodotto-cover">
                    <?php print render($content['field_immagine_ricetta']); ?>
                </div>
            </div>
        </div>
    </div>
    <div class="col-md-6 prodotto-scheda">
        <div class="classificazione">
            <div class="row">
                <!--<h2><a href="<?php //print $node_url; print $title; ?>"></a></h2>-->
                <div class="col-md-12">
                    <h2 class="product-name"><?php print $title; ?></h2>
                </div>
            </div>
            <div class="row">
                <div class="col-md-6 prodotto-marchio">
                    <?php
                    if ($content['field_marchio']) { ?>
                        <?php print render($content['field_marchio']); ?>
                    <?php }
                    ?>
                </div>
                <div class="col-md-6 prodotto-share">
                    <span>CONDIVIDI </span>
                    <?php print render($content['sharethis']); ?>
                </div>
            </div>
            <?php
            /*                if ($content['field_abitudine_alimentare']){ */ ?><!--
                    <h6 class="product_title">Consigliato per:</h6>
                    <?php /*print render($content['field_abitudine_alimentare']); */ ?>
                --><?php /*} */ ?>
        </div>
        <!--<div class="product-info-list">
            <div class="product-info-element">
                <h5 class="product_title">Prodotto:</h5>
                TO DO
            </div>
        </div>-->
        <?php if ($content['field_ingredienti_ricette']) { ?>
            <div class="row">
                <div class="col-md-12" style="margin-top:15px;">
                    <?php print render($content['field_ingredienti_ricette']); ?>
                </div>
            </div>
        <?php } ?>
        <?php if ($content['body']) { ?>
            <div class="row">
                <div class="col-md-12" style="margin-top:15px;">
                    <?php print render($content['body']); ?>
                </div>
            </div>

        <?php } ?>



    </div>
    <div class="col-md-3 column-ricetta">
        <div class="wrap-ricetta">
            <h5 class="info-ricetta">Informazioni</h5>
            <?php if ($content['field_difficolt_']) { ?>
                <div class="row row-info-ricetta" >
                    <div class="col-md-12">
                        <img src="<?php echo $url;?>/sites/default/themes/agroalimentare/img/grado.png" alt="Difficoltà" >
                        <?php print render($content['field_difficolt_']); ?>
                    </div>
                </div>
            <?php } ?>

            <?php if ($content['field_tempo']) { ?>
                <div class="row row-info-ricetta" >
                    <div class="col-md-12">
                        <img src="<?php echo $url;?>/sites/default/themes/agroalimentare/img/tempo.png" alt="Tempo" >
                        <?php print render($content['field_tempo']); ?>
                    </div>
                </div>
            <?php } ?>

        </div>

    </div>

    <div class="row">
        <div class="col-md-12 prodotti-correlati">
            <?php
            $block = module_invoke('views', 'block_view', 'related_products-block');
            print render($block['content']);
            ?>
        </div>
    </div>
